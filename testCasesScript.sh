for i in $(ls testcases)
do
./a.out < ./testcases/$i && cp resultsFile.txt testcases/{$i}Results.txt
done