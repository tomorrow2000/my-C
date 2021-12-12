#!/bin/bash                                                                 
//输出文件名$0、全部参数$@、第一个参数$1、第二个参数$2
echo "file name:$0"
echo "whole param:$@"
echo "first param:$1"
echo "two param:$2"
//比较两个字符串是否相等[ str1 == str2 ]
#echo "please input two str:"
#read -p "str:" strone strtwo
#[ "$strone" == "$strtwo" ] && echo "str1==str2"  || echo "str1!=str2"
//比较两个字符串是否相等test $str1 == str2
#echo "please input two str:"
#read -p "str:" strone strtwo
#test $strone == $strtwo && echo "str1==str2"  || echo "str1!=str2"
//&&命令1执行成功则执行命令2 ||命令1执行失败则执行命令2
#echo "please input file name:"
#read -p "file name:" filename
#test -e $filename && echo "$filename exist"  || echo "$filename no exist"
//普通的运算式
#read -p "please input two num:" first second
#total=$(($first+$second))
#echo "$first+$second=$total"
//输入打印
#read -p "please input age and height:" age height
#echo "your age = $age,your height = $height:"     
