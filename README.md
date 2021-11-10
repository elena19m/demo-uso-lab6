# This is a demo app for USO Lab 6.

Based on this code we will address:
- git commands
- Makefiles

# Git

Useful commands:
- `git init` - new local repository
- `git clone` - clone a repository
- `git branch` - check current branch
- `git checkout` - switch branch
- `git checkout -b` - create & switch branch
- `git pull` - retrieve changes from upstream
- `git add` - add files/changes
- `git commit` - commit changes
- `git push` - push changes
- `git status` - check the files that were modified or not tracked
- `git log` - view commits history
- `git diff` - show changes

# Makefile

A typical Makefile has the following structure:
- target (`regula1`, `regula2`, `regula3`) - identify the commands. If not
specified, the first target in file will be executed.
- dependences, are optionals. They can be files or other targets. When a target
is a dependency for antoher targer, the dependency-targer will be run first
- command - defines what that target does

```
regula1: <dependente1>
	command1

regula2: <dependente2>
	command2

regula3: <dependente3>
	comman3
```
