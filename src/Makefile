CC=gcc
FLAGS=-Wall -Werror -Wextra

all: gcov_report

clean: 
	rm -f *.o *.a *.css *.html *.gcno *.gcda *.gcov tests my_math_test.c my_math.c

my_math.a: my_math.o
	ar rc my_math.a *.o

my_math.o: functions/*.c
	$(CC) $(FLAGS) -std=c11 -c functions/*.c
	
my_math_test.o: 
	checkmk my_math_test.check > my_math_test.c
	$(CC) $(FLAGS) -c my_math_test.c

test: my_math.a my_math_test.o
	$(CC) $(FLAGS) my_math_test.o my_math.a -o tests -lcheck -fprofile-arcs -lrt -lsubunit -lm
	./tests

gcov_report: my_math_test.o
	$(CC) $(FLAGS) -c -fprofile-arcs -ftest-coverage functions/*.c -lcheck -lrt -lsubunit -lm
	$(CC) $(FLAGS) -fprofile-arcs *.o -o tests -lcheck -lrt -lsubunit -lm
	./tests
#	gcov -f my_math.gcda
	gcovr -r . --html --html-details -o coverage_report.html
	rm *.o

cpplint:
	python3 cpplint.py --extensions=c *.c *.h functions/*.c
