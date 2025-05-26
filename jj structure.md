# Git vs JJ (Jujutsu) - Command Comparison Cheat Sheet

This markdown file lists the most commonly used and useful commands in both **Git** and **JJ (Jujutsu)** version control systems, presented in a structured and side-by-side comparison for easy migration or reference.

---

## 🛠️ Repository Setup

| Action            | Git                           | JJ                               |
| ----------------- | ----------------------------- | -------------------------------- |
| Initialize a repo | `git init`                    | `jj init`                        |
| Clone a repo      | `git clone <url>`             | `jj git clone <url>`             |
| Add remote        | `git remote add <name> <url>` | `jj git remote add <name> <url>` |
| View remotes      | `git remote -v`               | `jj git remote -v`               |

---

## 🔄 Working Directory & Changes

| Action                    | Git                            | JJ                               |
| ------------------------- | ------------------------------ | -------------------------------- |
| Check status              | `git status`                   | `jj status`                      |
| View changes (diff)       | `git diff`                     | `jj diff`                        |
| View diff between commits | `git diff <commit1> <commit2>` | `jj diff -r <commit1> <commit2>` |
| Revert unstaged changes   | `git checkout -- <file>`       | `jj reset <file>`                |

> ✅ Note: **JJ tracks all changes automatically. No `git add` equivalent is needed.**

---

## ✅ Committing Changes

| Action              | Git                   | JJ                     |
| ------------------- | --------------------- | ---------------------- |
| Commit with message | `git commit -m "msg"` | `jj commit -m "msg"`   |
| Amend last commit   | `git commit --amend`  | `jj commit --amend`    |
| View commit log     | `git log`             | `jj log`               |
| Show commit details | `git show <commit>`   | `jj describe <commit>` |

---

## 🌿 Branching

| Action                    | Git                         | JJ                                   |
| ------------------------- | --------------------------- | ------------------------------------ |
| List branches             | `git branch`                | `jj branch`                          |
| Create branch             | `git branch <name>`         | `jj branch create <name>`            |
| Create & switch to branch | `git checkout -b <name>`    | `jj branch create <name> --checkout` |
| Switch branch             | `git checkout <branch>`     | `jj checkout <branch>`               |
| Delete branch             | `git branch -d <branch>`    | `jj branch delete <branch>`          |
| Rename branch             | `git branch -m <old> <new>` | `jj branch rename <old> <new>`       |

---

## 🔀 Merging & Rebasing

| Action                | Git                      | JJ                      |
| --------------------- | ------------------------ | ----------------------- |
| Merge a branch        | `git merge <branch>`     | `jj merge <branch>`     |
| Rebase current branch | `git rebase <branch>`    | `jj rebase -d <branch>` |
| Interactive rebase    | `git rebase -i <commit>` | `jj rebase`             |

---

## ⬆️ Remote Operations

| Action              | Git                           | JJ                                           |
| ------------------- | ----------------------------- | -------------------------------------------- |
| Fetch changes       | `git fetch`                   | `jj git fetch`                               |
| Pull & rebase       | `git pull --rebase`           | `jj git fetch && jj git rebase origin/main`  |
| Push branch         | `git push origin <branch>`    | `jj git push origin <branch>`                |
| Set upstream branch | `git push -u origin <branch>` | `jj git push --set-upstream origin <branch>` |

---

## 🧹 Cleanup & Misc

| Action              | Git                                   | JJ                 |
| ------------------- | ------------------------------------- | ------------------ |
| Remove tracked file | `git rm <file>`                       | `jj forget <file>` |
| Reset file to HEAD  | `git restore <file>` / `git checkout` | `jj reset <file>`  |
| Discard all changes | `git reset --hard`                    | `jj reset --all`   |
| Configure settings  | `git config --global`                 | *(Use Git config)* |

---

## 🚫 Not Yet in JJ

| Feature     | Git Command       | JJ Status       |
| ----------- | ----------------- | --------------- |
| Stashing    | `git stash`       | ❌ Not available |
| Cherry-pick | `git cherry-pick` | 🔜 Planned      |
| Reflog      | `git reflog`      | ❌ Not available |

---

## 🧠 Final Notes

* JJ is a Git-compatible DVCS built with a focus on simplicity, speed, and flexible history.
* Most JJ commands are simpler and assume autosave of changes (no staging area).
* For anything unsupported, fallback to Git via: `jj git <command>`.
* You can keep using GitHub, Git remotes, and existing repos.

---

> 💡 Tip: Use `jj help` to explore all commands and options inside JJ.

