#!/bin/bash

./gbadisasm arm9.bin -l 0x02000000 -c fe11us-arm9.txt -s

# commit out "MOKHA_ARM9" in gbadisasm.h
# ./gbadisasm itcm-base.bin -l 0x01FF8000 -c fe11us-itcm.txt -s > out-itcm.txt
