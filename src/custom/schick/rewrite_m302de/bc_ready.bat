@ECHO OFF
@REM These are the files, which produce the same code as the originals.
@REM They shall not change, so the are compared with every commit.
@REM
@REM -- here start the complete
..\BIN\BCC.EXE -mlarge -O- -c -1 -Y SEG001.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Y -IAIL SEG002.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Y SEG003.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Y SEG004.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Y SEG005.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Y SEG006.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Y SEG007.CPP
..\BIN\TASM.EXE /os /z SEG008.asm SEG008.OBJ
..\BIN\TASM.EXE /os /z SEG009.asm SEG009.OBJ
..\BIN\TASM.EXE /os /z SEG010.asm SEG010.OBJ
..\BIN\TASM.EXE /m /w+ /ml /iAIL AIL\AIL.ASM SEG011.OBJ
..\BIN\TASM.EXE /os /z SEG013.asm SEG013.OBJ
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG024.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG025.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG026.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG027.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG028.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG029.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG030.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG031.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG032.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG033.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG034.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG035.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG036.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG037.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG038.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG039.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG040.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG041.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG042.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG043.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG044.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG045.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG046.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG047.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG048.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG049.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG050.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG051.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG052.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG053.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG054.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG055.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG056.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG057.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG058.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG059.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG060.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG061.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG062.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG063.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG064.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG065.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG066.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG067.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG068.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG069.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG070.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG071.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG072.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG073.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG074.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG075.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG076.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG077.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG078.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG079.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG080.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG081.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG082.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG083.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG084.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG085.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG086.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG087.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG088.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG089.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG090.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG091.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG092.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG093.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG094.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG095.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG096.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG097.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG098.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG099.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG100.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG101.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG102.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG103.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG104.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG105.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG106.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG107.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG108.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG109.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG110.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG111.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG112.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG113.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG114.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG115.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG116.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG117.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG118.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG119.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG120.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG121.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo SEG122.CPP
..\BIN\BCC.EXE -mlarge -O- -c -1 -Yo DATSEG.CPP
TLINK @TLINK.RES
