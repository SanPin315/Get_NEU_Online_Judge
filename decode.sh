rm -r txt answer 2>/dev/null
mkdir txt answer
wget https://oj.neu.edu.cn/api/v1/submission/$1/testcases -O txt/temp.txt #>/dev/null 2>&1 
python ./bin/decode.py
touch txt/waiting.txt
./bin/process txt/man.txt
./bin/decode
