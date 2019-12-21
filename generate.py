#!/usr/bin/env python3

import argparse
import typing

def generate_concept(n: int, output_file: typing.TextIO):
	output_file.write('template <typename T>\n')
	output_file.write('concept Has' + str(n) + 'attr = \n')
	if n != 0:
		output_file.write('Has' + str(n - 1) + 'attr<T> &&\n')
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
	output_file.write('auto to_tuple_impl(Has' + str(n) + 'attr auto t)\n')
	output_file.write('{\n')

	if n != 0:
		output_file.write('\tauto [')
		for i in range(0, n):
			if i != 0:
				output_file.write(', ')
			output_file.write('a' + str(i))
		output_file.write('] = t;\n')

	output_file.write('\treturn std::tuple(')
	for i in range(0, n):
		if i != 0:
			output_file.write(', ')
		output_file.write('a' + str(i))
	output_file.write(');\n')

	output_file.write('}\n\n')

def main():
	parser = argparse.ArgumentParser(description='Graphical user interface for YololTranslator')
	parser.add_argument('-n', '--nb', default=25, help='The max number of attributes handled')
	parser.add_argument('-o', '--output', default='aggreget.hpp', help='Path of the output file')
	args = parser.parse_args()
	
	output_file = open(args.output, "w")
	output_file.write('#pragma once\n\n')
	output_file.write('#include <tuple>\n\n')

	output_file.write('namespace aggregate\n')
	output_file.write('{\n\n')

	output_file.write('namespace details\n')
	output_file.write('{\n\n')

	output_file.write('/*\n** Concepts\n*/\n\n')
	for i in range (0, args.nb):
		generate_concept(i, output_file)

	output_file.write('/*\n** ToTupleDetails\n*/\n\n')
	for i in range (0, args.nb):
		generate_to_tuple(i, output_file)

	output_file.write('\n}\n')

	output_file.write('\n}\n')

if __name__ == "__main__":
	main()