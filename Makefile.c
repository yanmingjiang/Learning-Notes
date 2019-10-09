Makefile文件：
    叫做编译脚本，里面记录的编译代码的命令的集合。
    在终端执行make命令时，会读取名为Makefile|makefile的文件，如果大小写同时存在，会优先调用小写的makefile。
    为什么需要Makefile：
        1、随着项目规模的不断增加，代码量越来越多，为了更好的管理代码、协同工作、不得不把代码拆分、设计成多个文件。
        2、由于源文件过多，编译时命令不易写，编译时间过长，而使用Makefile可以多目录编译，一次编写循环利用，有效节约编译时间。
        3、Makefile中可以使用分支、循环、函数、系统命令，以此来控制、优化编译的过程。

        Makefile的一般格式：
        字符串变量
            name = value
            name := value
        执行目标(函数)
            // 默认第一个执行目标是入口，执行目标可以互相调用
            func:调用其他执行目标
                cmd ......
        注意：
            1、变量与执行目标都顶格写，不要有空格
            2、执行目标中的编译命令一定要使用tab键缩进。
            3、#可以进行注释

        为什么Makefile可以节约编译时间：
            make程序会检查所需要编译文件的最后访问时间，如果与上次编译时一致，就不在编译，也就是说每次执行make命令，只编译部分源文件，
        重新的生成.o结尾的目标文件，然后再把所有的目标文件合并成可执行文件。
        