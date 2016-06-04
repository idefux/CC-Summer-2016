#enabled = struct_global_declaration_1.m struct_global_declaration_2.m struct_local_declaration.m struct_pointer_function_argument.m struct_pointer_to_struct.m struct_access_assignment1.m
binaries = $(patsubst %.c,%.m,$(wildcard *.c))
assemblies = $(patsubst %.c,%.s,$(wildcard *.c))

test:
	make test_self_compilation
	make test_assignment1
	make test_assignment2
	make test_assignment3
	make test_assignment4

test_self_compilation: $(binaries) $(assemblies)

test_assignment1: assignment1.c
	../../selfie -c $<
	../../selfie -c $< -d 1 | grep -E 'exit code 1'

test_assignment2: assignment2.c
	../../selfie -c $<
	../../selfie -c $< -d 1 | grep -E 'exit code 0'

test_assignment3: assignment3.c
	../../selfie -c $<
	../../selfie -c $< -d 1 | grep -E 'exit code 1'

test_assignment4: assignment4.c
	../../selfie -c $<
	../../selfie -c $< -d 1 | grep -E 'exit code 0'

test_if1: if1.c
	../../selfie -c $<
	../../selfie -c $< -d 1 | grep -E 'exit code 77'

test_if2: if2.c
	../../selfie -c $<
	../../selfie -c $< -d 1 | grep -E 'exit code 88'

# must not lw y
test_if3: if3.c
	../../selfie -c $<
	../../selfie -c $< -d 1 | grep -E 'exit code 88'
	!(../../selfie -c $< -d 1 | grep 'lw $$t1,-8($$fp)')

test_if4: if4.c
	../../selfie -c $<
	../../selfie -c $< -d 1 | grep -E 'exit code 88'

# must not lw y
test_if5: if5.c
	../../selfie -c $<
	../../selfie -c $< -d 1 | grep -E 'exit code 77'
	!(../../selfie -c $< -d 1 | grep 'lw $$t1,-8($$fp)')

%.m: %.c
	!(../../selfie -c $< | grep "error")
	../../selfie -c $< -o $@a
	../../selfie -l ../../selfie.m -m 2 -c $< -o $@b
	diff -q $@a $@b
	rm $@a
	rm $@b

%.s: %.c
	!(../../selfie -c $< | grep "error")
	../../selfie -c $< -s $@a
	../../selfie -l ../../selfie.m -m 2 -c $< -s $@b
	diff -q $@a $@b
	rm $@a
	rm $@b

clean:
	rm -rf *.s*
	rm -rf *.m*
