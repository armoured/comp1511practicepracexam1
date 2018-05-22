Welcome to the practice prac exam

each question is in a directory. There are three questions. qa, qb and qc.

=== Question A === (medium)

to start question a do this:

	cd qa
	chmod +x ./testqa.sh

then open up staircase.c and complete the printStaircase() function

to test your program run the testing script by:

	./testqa.sh

you can also manually test your solution by doing this:

gcc -Wall -Werror -O -o staircase staircase.c
./staircase size

where size is a number you input.


==================


=== Question B === (easy)

to start question b do this:

	cd qb
	chmod +x ./testqb.sh

then open up sort.c and complete the sort() function

to test your program run the testing script by:

	./testqb.sh

you can also manually test your solution by doing this:

gcc -Wall -Werror -O -o sort sort.c
./sort length num1 num2 numN

where length is the size of the array which contains num1, num2 ... numN

==================

=== Question C === (hard)

to start question c do this:

	cd qc
	chmod +x ./testqc.sh

then open up loop.c and complete the hasloop() function

to test your program run the testing script by:

	./testqc.sh

==================


