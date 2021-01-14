
# 使用说明：

compress.hpp 是你需要完成的文件  
judge.cpp 是你需要编译运行的文件，从标准输入读入每个测试点下的1.in，会调用你的压缩和解压函数并输出PSNR，压缩文件大小以供参考。同时也会将你还原出的RGB值输出到out.txt供rev.py调试使用。  
rev.py 调试用文件，可以读取judge.cpp输出的out.txt并将其还原成save.png的图片，你可以直观地看到自己的压缩效果。  

# 大致使用方法：

>g++ -O2 judge.cpp -o judge  
>./judge < Snow_Leopard/1.in  
>python3 rev.py  

提交时，请将compress.hpp内的所有内容粘贴至提交框。

