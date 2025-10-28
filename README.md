# 使用方法

运行

```bash
./build.sh
```

这时,会自动编译src中的.cpp代码到bin目录形成可执行文件

运行

```bash
./decode.sh ***
```

(其中***是OJ评测编号)

这样会自动调用bin中的可执行程序和.py文件将东北大学Online_Judge系统相应编号的评测数据输出到anwser目录中.

txt/temp.txt文件是原始数据.

txt/man.txt文件是人类可读的模式

txt/waiting.txt文件是从中提取的output_run字段
