clear
#ex01
echo "ex01----------------"
export FT_USER=coder
chmod 744 ./ex01/print_groups.sh
./ex01/print_groups.sh
#ex02
echo "ex02----------------"
chmod 744 ./ex02/find_sh.sh
./ex02/find_sh.sh | cat -e
#ex03
echo "ex03----------------"
chmod 744 ./ex03/count_files.sh
./ex03/count_files.sh | cat -e
#ex04
echo "ex04----------------"
chmod 744 ./ex04/MAC.sh
./ex04/MAC.sh | cat -e
#ex05
echo "ex05----------------"
cd ex05
ls -lRa *MaRV* | cat -e
cd ..
#ex06
echo "ex06----------------"
chmod 744 ./ex06/skip.sh
./ex06/skip.sh
#ex07
echo "ex07----------------"
export FT_LINE1=7
export FT_LINE2=15
chmod 744 ./ex07/r_dwssap.sh
./ex07/r_dwssap.sh
#ex08
echo "ex08----------------"
export FT_NBR1='\"\"!\"\"!\"\"!\"\"!\"\"!\"\"'
export FT_NBR2='dcrcmcmooododmrrrmorcmcrmomo'
chmod 744 ./ex08/add_chelou.sh
./ex08/add_chelou.sh