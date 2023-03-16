# json项目相关







# Git学习相关

**git push** 命令用于从将本地的分支版本上传到远程并合并。

```Git
git push <远程主机名> <本地分支名>:<远程分支名>
```

如果本地分支名与远程分支名相同，则可以省略冒号：

```
git push <远程主机名> <本地分支名>
```

以下命令将本地的 master 分支推送到 origin 主机的 master 分支。

```
git push origin master
```

相当于：

```
git push origin master:master
```

