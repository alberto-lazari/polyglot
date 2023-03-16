#define C
#ifndef C
"""true"
=begin &> /dev/null
# Shell code
file=polyglot.c;
gcc $file -o c.out && ./c.out;rm c.out;
g++ -x c++ $file -o c++.out && ./c++.out;
rm c++.out;php $file;python3 $file;
sh $file;ruby $file;exit 0
<?php
for ($i = 0; $i < 10; ++$i) {
    echo "                                         ";
    echo chr(27) . "[A";
    for ($j = 0; $j < 41; ++$j) {
        echo "\x08";
    }
}
echo "                                         ";
for ($j = 0; $j < 41; ++$j) {
    echo "\x08";
}
// Php code
$file = "polyglot.c";
system("gcc $file -o c.out && ./c.out;rm c.out;g++ -x c++ $file -o c++.out && ./c++.out;rm c++.out;php $file;python3 $file;sh $file;ruby $file;");
exit();
?>
"\
"""
import os
# Python code
os.system("file=polyglot.c;gcc $file -o c.out && ./c.out;rm c.out;g++ -x c++ $file -o c++.out && ./c++.out;rm c++.out;php $file;python3 $file;sh $file;ruby $file;")
""" "
=end
# Ruby code
system("file=polyglot.c;gcc $file -o c.out && ./c.out;rm c.out;g++ -x c++ $file -o c++.out && ./c++.out;rm c++.out;php $file;python3 $file;sh $file;ruby $file;")
__END__
" """
#endif
#ifndef __cplusplus
#include <stdlib.h>
#define exit() /* C code */ int main() { system("file=polyglot.c;gcc $file -o c.out && ./c.out;rm c.out;g++ -x c++ $file -o c++.out && ./c++.out;rm c++.out;php $file;python3 $file;sh $file;ruby $file;"); }
#else
#include <cstdlib>
#define exit() /* C++ code */ int main() { system("file=polyglot.c;gcc $file -o c.out && ./c.out;rm c.out;g++ -x c++ $file -o c++.out && ./c++.out;rm c++.out;php $file;python3 $file;sh $file;ruby $file;"); }
#endif
exit()
