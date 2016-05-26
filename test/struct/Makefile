#enabled = struct_global_declaration_1.m struct_global_declaration_2.m struct_local_declaration.m struct_pointer_function_argument.m struct_pointer_to_struct.m struct_access_assignment1.m
binaries = $(patsubst %.c,%.m,$(wildcard *.c))
assemblies = $(patsubst %.c,%.s,$(wildcard *.c))

test_self_compilation: $(binaries) $(assemblies)

test: struct_return_type.c
	../../selfie -c struct_return_type.c
	../../selfie -c struct_return_type.c -d 1 | grep -E 'exit code 22'

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
