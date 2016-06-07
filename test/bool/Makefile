#enabled = struct_global_declaration_1.m struct_global_declaration_2.m struct_local_declaration.m struct_pointer_function_argument.m struct_pointer_to_struct.m struct_access_assignment1.m
binaries = $(patsubst %.c,%.m,$(wildcard *.c))
assemblies = $(patsubst %.c,%.s,$(wildcard *.c))

test:
	make test_self_compilation
	make test_assignment1
	make test_assignment2
	make test_assignment3
	make test_assignment4
	make test_if1
	make test_if2
	make test_if3
	make test_if4
	make test_if5
	make test_if6
	make test_if7
	make test_logicalnot1
	make test_logicalnot2
	make test_logicalnot3
	make test_logicalnot_controlflow
	make test_logicalnot_data

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

# must not lw y
test_if6: if6.c
	../../selfie -c $<
	../../selfie -c $< -d 1 | grep -E 'exit code 77'
	!(../../selfie -c $< -d 1 | grep 'lw $$t1,-8($$fp)')

# must not lw y
test_if7: if7.c
	../../selfie -c $<
	../../selfie -c $< -d 1 | grep -E 'exit code 88'
	!(../../selfie -c $< -d 1 | grep 'lw $$t1,-8($$fp)')

test_logicalnot1: logicalnot1.c
	../../selfie -c $<
	../../selfie -c $< -d 1 | grep -E 'exit code 0'

test_logicalnot2: logicalnot2.c
	../../selfie -c $<
	../../selfie -c $< -d 1 | grep -E 'exit code 1'

test_logicalnot3: logicalnot3.c
	../../selfie -c $<
	../../selfie -c $< -d 1 | grep -E 'exit code 77'

test_logicalnot_controlflow: logicalnot_controlflow*.c
	../../selfie -c logicalnot_controlflow1.c -d 1 | grep 'exit code 5'
	../../selfie -c logicalnot_controlflow2.c -d 1 | grep 'exit code 5'
	../../selfie -c logicalnot_controlflow3.c -d 1 | grep 'exit code 5'
	../../selfie -c logicalnot_controlflow4.c -d 1 | grep 'exit code 27'
	../../selfie -c logicalnot_controlflow5.c -d 1 | grep 'exit code 5'
	../../selfie -c logicalnot_controlflow6.c -d 1 | grep 'exit code 27'
	../../selfie -c logicalnot_controlflow7.c -d 1 | grep 'exit code 27'
	../../selfie -c logicalnot_controlflow8.c -d 1 | grep 'exit code 27'
	../../selfie -c logicalnot_controlflow9.c -d 1 | grep 'exit code 10'
	../../selfie -c logicalnot_controlflow10.c -d 1 | grep 'exit code 77'
	../../selfie -c logicalnot_controlflow11.c -d 1 | grep 'exit code 77'


test_logicalnot_data: logicalnot_data*.c
	../../selfie -c logicalnot_data1.c -d 1 | grep 'exit code 0'
	../../selfie -c logicalnot_data2.c -d 1 | grep 'exit code 1'
	../../selfie -c logicalnot_data3.c -d 1 | grep 'exit code 0'

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
