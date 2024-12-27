#!/bin/python3

import re

import re

# 读取文件内容
with open('symbols.txt', 'r') as file:
    text = file.read()

# 正则表达式匹配 "kind:function(arm" 后面的 addr 地址
pattern = r'kind:function\(arm.*?\) addr:(0x[0-9a-fA-F]+)'

# 查找所有符合条件的地址
addresses = re.findall(pattern, text)

# 打印结果，按要求的格式
for addr in addresses:
    print(f"arm_func {addr}")
