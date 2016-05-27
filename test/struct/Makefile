#enabled = struct_global_declaration_1.m struct_global_declaration_2.m struct_local_declaration.m struct_pointer_function_argument.m struct_pointer_to_struct.m struct_access_assignment1.m
binaries = $(patsubst %.c,%.m,$(wildcard *.c))
assemblies = $(patsubst %.c,%.s,$(wildcard *.c))

test:
	make test_self_compilation
	make test_return_type
	make test_global_initialization

test_self_compilation: $(binaries) $(assemblies)

test_return_type: struct_return_type.c
	../../selfie -c $<
	../../selfie -c $< -d 1 | grep -E 'exit code 12'

test_global_initialization: struct_global_initialization.c
	../../selfie -c $<
	../../selfie -c $< -d 1 | grep -E 'exit code 19'

%.m: %.c
	../../selfie -c $<
	../../selfie -c $< -o $@a
	../../selfie -l ../../selfie1.m -m 2 -c $< -o $@b
	diff -q $@a $@b
	rm $@a
	rm $@b

%.s: %.c
	../../selfie -c $<
	../../selfie -c $< -s $@a
	../../selfie -l ../../selfie1.m -m 2 -c $< -s $@b
	diff -q $@a $@b
	rm $@a
	rm $@b

clean:
	rm -rf *.s*
	rm -rf *.m*
