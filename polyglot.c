#define C
#ifndef C
"""true"
=begin &> /dev/null
# Shell code
echo Shell
exit 0
<?php
for ($i = 0; $i < 7; ++$i) {
    echo "                   ";
    echo chr(27) . "[A";
    for ($j = 0; $j < 19; ++$j) {
        echo "\x08";
    }
}
echo "                   ";
for ($j = 0; $j < 19; ++$j) {
    echo "\x08";
}
// Php code
echo "php\n";
exit();
?>
"\
"""
# Python code
print('Python')
"""
=end
# Ruby code
puts 'Ruby'
__END__
"""
#endif
#ifndef __cplusplus
#include <stdio.h>
#define exit() /* C code */ int main() { printf("C\n"); }
#else
#include <iostream>
#define exit() /* C++ code */ int main() { std::cout << "C++\n"; }
#endif
exit()
