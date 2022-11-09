#!/usr/bin/node
/*
	print a square with the character #
	The square size must be the 1st programme argument
*/


if (process.argv.length < = 2) {
	process.stderr.write("Missing argument\n");
	process.stderr.write("Usage: ./1-print_square.js <size>\n");
	process.stderr.write("Example: ./1-print_square.js 8\n");
	process.exit(1)
}

size = parseInt(process.argv[2], 10)

for (let i = 0; i < size; i++) {
	for (let j = 0; j < size; j++) {
		process.stdout.write("#);
	}
	process.stdout.write("\n");
}
