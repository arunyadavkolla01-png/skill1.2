all:
	gcc src/fork_demo.c -o bin/fork_demo
	gcc src/exec_demo.c -o bin/exec_demo
	gcc src/fork_exec.c -o bin/fork_exec

run1:
	./bin/fork_demo

run2:
	./bin/exec_demo

run3:
	./bin/fork_exec

clean:
	rm -f bin/*
