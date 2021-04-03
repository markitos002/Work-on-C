#\!/bin/csh
foreach file (*/makefile.gnu)
    set make=$file:h/Makefile
    rm -f $make
    ln -s makefile.gnu $make
end
