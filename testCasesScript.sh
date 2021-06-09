mkdir testcasesResults
for i in $(ls testcases)
do
./a.out < ./testcases/$i && cp resultsFile.txt testcasesResults/${i}Results.txt && \
./a.out < ./testcases/$i | grep "error" >> testcasesResults/${i}Errors.txt
done