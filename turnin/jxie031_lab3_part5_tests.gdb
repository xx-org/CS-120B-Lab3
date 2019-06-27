# Test file for CS-120B-Lab3


# commands.gdb provides the following functions for ease:
#   test "<message>"
#       Where <message> is the message to print. Must call this at the beginning of every test
#       Example: test "PINA: 0x00 => expect PORTC: 0x01"
#   checkResult
#       Verify if the test passed or failed. Prints "passed." or "failed." accordingly, 
#       Must call this at the end of every test.
#   expectPORTx <val>
#       With x as the port (A,B,C,D)
#       The value the port is epected to have. If not it will print the erroneous actual value
#   setPINx <val>
#       With x as the port or pin (A,B,C,D)
#       The value to set the pin to (can be decimal or hexidecimal
#       Example: setPINA 0x01
#   printPORTx f OR printPINx f 
#       With x as the port or pin (A,B,C,D)
#       With f as a format option which can be: [d] decimal, [x] hexadecmial (default), [t] binary 
#       Example: printPORTC d
#   printDDRx
#       With x as the DDR (A,B,C,D)
#       Example: printDDRB

echo ======================================================\n
echo Running all tests..."\n\n


test "PIND: 0x00 PINB: 0x00=> PORTB: 0x00"
setPIND 0x00
setPINB 0
continue 5
expectPORTB 0x00
checkResult

test "PIND: 35 PINB: 1=> PORTB: 0x02"
setPIND 35
setPINB 1
continue 5
expectPORTB 0x02
checkResult

test "PIND: 0x77 PINB: 0x0A => PORTB: 0x02"
setPIND 0x77
setPINB 0x0A
continue 5
expectPORTB 0x02
checkResult

test "PIND: 20 PINB: 1=> PORTB: 0x04"
setPIND 20
setPINB 1
continue 5
expectPORTB 0x04
checkResult

test "PIND: 1 PINB: 1=> PORTB: 0x00"
setPIND 1
setPINB 1
continue 5
expectPORTB 0x00
checkResult

test "PIND: 2 PINB: 1=> PORTB: 0x00"
setPIND 2
setPINB 1
continue 5
expectPORTB 0x00
checkResult

test "PIND: 3 PINB: 1=> PORTB: 0x04"
setPIND 3
setPINB 2
continue 5
expectPORTB 0x04
checkResult
# Add tests below

# Report on how many tests passed/tests ran
set $passed=$tests-$failed
eval "shell echo Passed %d/%d tests.\n",$passed,$tests
echo ======================================================\n
