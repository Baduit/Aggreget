#!/usr/bin/env python3

import argparse
import typing

def generate_concept(n: int, output_file: typing.TextIO):
	output_file.write('template <typename T>\n')
	output_file.write('concept Has' + str(n) + 'attr = \n')
	if n != 0:
		output_file.write('\tHas' + str(n - 1) + 'attr<T> &&\n')
	output_file.write('\tAggregate<T> &&\n')
	output_file.write('\trequires(T& t)\n')
	output_file.write('\t{\n')
	output_file.write('\t\t{\n')
	output_file.write('\t\t\tT{ ')
	for i in range(0, n):
		if i != 0:
			output_file.write(', ')
		output_file.write('{}')
	output_file.write(' }\n')
	output_file.write('\t\t};\n')
	output_file.write('\t};\n')
	output_file.write('\n')

def generate_to_tuple(n: int, output_file: typing.TextIO):
	output_file.write('template <Has' + str(n) + 'attr T>\n')
	output_file.write('constexpr auto to_tuple_impl_cref(const T& t)\n')
	output_file.write('{\n')

	if n != 0:
		output_file.write('\tconst auto& [')
		for i in range(0, n):
			if i != 0:
				output_file.write(', ')
			output_file.write('a' + str(i))
		output_file.write('] = t;\n')

	output_file.write('\treturn std::forward_as_tuple(')
	for i in range(0, n):
		if i != 0:
			output_file.write(', ')
		output_file.write('a' + str(i))
	output_file.write(');\n')

	output_file.write('}\n\n')

def generate_to_tuple_forwarding(n: int, output_file: typing.TextIO):
	output_file.write('template <Has' + str(n) + 'attr T>\n')
	output_file.write('constexpr auto to_tuple_impl_fref(T&& t)\n')
	output_file.write('{\n')

	if n != 0:
		output_file.write('\tauto&& [')
		for i in range(0, n):
			if i != 0:
				output_file.write(', ')
			output_file.write('a' + str(i))
		output_file.write('] = t;\n')

	output_file.write('\treturn std::forward_as_tuple(')
	for i in range(0, n):
		if i != 0:
			output_file.write(', ')
		output_file.write('std::forward<decltype(a' + str(i) + ')>(a' + str(i) + ')')
	output_file.write(');\n')

	output_file.write('}\n\n')

def generate_to_tuple_ref(n: int, output_file: typing.TextIO):
	output_file.write('template <Has' + str(n) + 'attr T>\n')
	output_file.write('constexpr auto to_tuple_impl_ref(T& t)\n')
	output_file.write('{\n')

	if n != 0:
		output_file.write('\tauto& [')
		for i in range(0, n):
			if i != 0:
				output_file.write(', ')
			output_file.write('a' + str(i))
		output_file.write('] = t;\n')

	output_file.write('\treturn std::forward_as_tuple(')
	for i in range(0, n):
		if i != 0:
			output_file.write(', ')
		output_file.write('a' + str(i))
	output_file.write(');\n')

	output_file.write('}\n\n')

def generate_get_tuple_size(n: int, output_file: typing.TextIO):
	output_file.write('template <Has' + str(n) + 'attr T>\n')
	output_file.write('constexpr std::size_t get_tuple_size_impl()\n')
	output_file.write('{\n')
	output_file.write('\treturn ' + str(n) + ';\n')
	output_file.write('}\n\n')



def main():
	parser = argparse.ArgumentParser(description='Generate stuff for aggreget_generated.hpp')
	parser.add_argument('-n', '--nb', type=int, default=25, help='The max number of attributes handled')
	parser.add_argument('-o', '--output', default='./src/aggreget/aggreget_generated.hpp', help='Path of the output file')
	args = parser.parse_args()
	
	output_file = open(args.output, "w")
	output_file.write('#pragma once\n\n')
	output_file.write('#include <tuple>\n\n')
	output_file.write('#include "aggregate_concept.hpp"\n\n')

	output_file.write('namespace aggreget\n')
	output_file.write('{\n\n')

	output_file.write('namespace details\n')
	output_file.write('{\n\n')

	output_file.write('/*\n** Concepts\n*/\n\n')
	for i in range (0, args.nb):
		generate_concept(i, output_file)

	output_file.write('/*\n** ToTupleDetails constant ref\n*/\n\n')
	for i in range (0, args.nb):
		generate_to_tuple(i, output_file)

	output_file.write('/*\n** ToTupleDetails forwarding ref\n*/\n\n')
	for i in range (0, args.nb):
		generate_to_tuple_forwarding(i, output_file)

	output_file.write('/*\n** ToTupleDetails ref\n*/\n\n')
	for i in range (0, args.nb):
		generate_to_tuple_ref(i, output_file)

	output_file.write('/*\n** GetTupleSizeDetails\n*/\n\n')
	for i in range (0, args.nb):
		generate_get_tuple_size(i, output_file)

	output_file.write('\n}\n')

	output_file.write('\n}\n')

if __name__ == "__main__":
	main()