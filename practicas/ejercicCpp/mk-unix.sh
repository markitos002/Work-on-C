#\!/bin/csh
foreach file (*/makefile.unx)
    set make=$file:h/Makefile
    rm -f $make
    ln -s makefile.unx $make
end
