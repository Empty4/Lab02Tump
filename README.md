# Lab02Tump
## Домашнее задание
**Студента группы ИУ8-23** 
**Вечтомовой Юлии**

### Part1

<details>
  <summary></summary>
  <p>

1. Создайте пустой репозиторий на сервисе github.com (или gitlab.com, или bitbucket.com).

2. Выполните инструкцию по созданию первого коммита на странице репозитория, созданного на предыдещем шаге.
```sh
┌──(kali㉿kali)-[~/projects/lab02]
└─$ sudo apt update && sudo apt install -y git g++
[sudo] password for kali:
Get:1 http://kali.download/kali kali-rolling InRelease [41.5 kB]
Get:2 http://kali.download/kali kali-rolling/main amd64 Packages [21.0 MB]
Get:3 http://kali.download/kali kali-rolling/main amd64 Contents (deb) [51.9 MB]
Get:4 http://kali.download/kali kali-rolling/contrib amd64 Packages [121 kB]
Get:5 http://kali.download/kali kali-rolling/contrib amd64 Contents (deb) [327 kB]
Get:6 http://kali.download/kali kali-rolling/non-free amd64 Packages [198 kB]
Get:7 http://kali.download/kali kali-rolling/non-free amd64 Contents (deb) [910 kB]
Get:8 http://kali.download/kali kali-rolling/non-free-firmware amd64 Packages [10.6 kB]
Get:9 http://kali.download/kali kali-rolling/non-free-firmware amd64 Contents (deb) [24.3 kB]
Fetched 74.5 MB in 1min 44s (719 kB/s)                                      
1268 packages can be upgraded. Run 'apt list --upgradable' to see them.
git is already the newest version (1:2.47.2-0.1).
git set to manually installed.
g++ is already the newest version (4:14.2.0-1).
Summary:
  Upgrading: 0, Installing: 0, Removing: 0, Not Upgrading: 1268
                                                                             
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git clone https://github.com/Empty4/Lab02Tump.git   
Клонирование в «Lab02Tump»...
remote: Enumerating objects: 3, done.
remote: Counting objects: 100% (3/3), done.
remote: Total 3 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
Получение объектов: 100% (3/3), готово.

                                                                              
```
3. Создайте файл hello_world.cpp в локальной копии репозитория (который должен был появиться на шаге 2). Реализуйте программу Hello world на языке C++ используя плохой стиль кода. Например, после заголовочных файлов вставьте строку using namespace std;.
```sh
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ nano hello_world.cpp

```
4. Добавьте этот файл в локальную копию репозитория.
```sh
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git add hello_world.cpp 
```
5. Закоммитьте изменения с осмысленным сообщением.
```sh
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git commit -m "Add bad version of hello_world.cpp"
[main ac8d495] Add bad version of hello_world.cpp
 1 file changed, 7 insertions(+)
 create mode 100644 hello_world.cpp
```
6. Изменитьте исходный код так, чтобы программа через стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщение Hello world from @name, где @name имя пользователя.
```sh
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git add hello_world.cpp 
```
7. Закоммитьте новую версию программы. Почему не надо добавлять файл повторно git add?
```sh
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git commit -m "Add better version with name-input in hello_world.cpp"
[main 6ab6711] Add better version with name-input in hello_world.cpp
 1 file changed, 10 insertions(+)

```
```sh
 Поскольку мы уже добавили файл ранее (и он находится под версионным контролем), нам не нужно добавлять его явно.
```
8. Запуште изменения в удалёный репозиторий.
```sh
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git push origin main
Username for 'https://github.com': empty4
Password for 'https://empty4@github.com': 
Перечисление объектов: 7, готово.
Подсчет объектов: 100% (7/7), готово.
При сжатии изменений используется до 2 потоков
Сжатие объектов: 100% (6/6), готово.
Запись объектов: 100% (6/6), 733 байта | 733.00 КиБ/с, готово.
Total 6 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), done.
To https://github.com/Empty4/Lab02Tump.git
   3d49345..6ab6711  main -> main
```
9. Проверьте, что история коммитов доступна в удалёный репозитории.
```sh
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git log --oneline
6ab6711 (HEAD -> main, origin/main, origin/HEAD) Add better version with name-input in hello_world.cpp
ac8d495 Add bad version of hello_world.cpp
3d49345 Initial commit

```

  </p>
</details>

### Part2

<details>
  <summary></summary>
  <p>

1. В локальной копии репозитория создайте локальную ветку patch1.

```sh
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git checkout -b panch1                                               
Переключились на новую ветку «panch1»

```

2. Внесите изменения в ветке patch1 по исправлению кода и избавления от using namespace std;.
```sh
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ nano hello_world.cpp

```

3. commit, push локальную ветку в удалённый репозиторий.
```sh
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git add hello_world.cpp
                                                                                                                   
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git commit -m "Remove 'using namespace std'"                         
[panch1 916acaf] Remove 'using namespace std'
 1 file changed, 4 insertions(+), 11 deletions(-)
                                                                             
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git push -u origin patch1
Username for 'https://github.com': empty4
Password for 'https://empty4@github.com': 
Перечисление объектов: 8, готово.
Подсчет объектов: 100% (8/8), готово.
При сжатии изменений используется до 2 потоков
Сжатие объектов: 100% (6/6), готово.
Запись объектов: 100% (6/6), 728 байтов | 728.00 КиБ/с, готово.
Total 6 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), done.
remote: 
remote: Create a pull request for 'patch1' on GitHub by visiting:
remote:      https://github.com/Empty4/Lab02Tump/pull/new/patch1
remote: 
To https://github.com/Empty4/Lab02Tump.git
 * [new branch]      patch1 -> patch1
branch 'patch1' set up to track 'origin/patch1'.

```

4. Проверьте, что ветка patch1 доступна в удалёный репозитории.

5. Создайте pull-request patch1 -> master.

6. В локальной копии в ветке patch1 добавьте в исходный код комментарии.

7. commit, push.
```sh
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git add hello_world.cpp  
                                                                                                                   
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git commit -m "Add code comments"                       
[patch1 75ade87] Add code comments
 1 file changed, 1 insertion(+), 1 deletion(-)
                                                                                                                   
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git push origin patch1           
Username for 'https://github.com': empty4
Password for 'https://empty4@github.com': 
Перечисление объектов: 5, готово.
Подсчет объектов: 100% (5/5), готово.
При сжатии изменений используется до 2 потоков
Сжатие объектов: 100% (3/3), готово.
Запись объектов: 100% (3/3), 350 байтов | 350.00 КиБ/с, готово.
Total 3 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/Empty4/Lab02Tump.git
   2841f70..75ade87  patch1 -> patch1

```

8. Проверьте, что новые изменения есть в созданном на шаге 5 pull-request

9. В удалённый репозитории выполните слияние PR patch1 -> master и удалите ветку patch1 в удаленном репозитории.

10. Локально выполните pull.
```sh
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git checkout main                
Переключились на ветку «main»
Эта ветка соответствует «origin/main».
                                                                                                                   
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git pull origin main  
remote: Enumerating objects: 1, done.
remote: Counting objects: 100% (1/1), done.
remote: Total 1 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
Распаковка объектов: 100% (1/1), 886 байтов | 886.00 КиБ/с, готово.
Из https://github.com/Empty4/Lab02Tump
 * branch            main       -> FETCH_HEAD
   6ab6711..0d48792  main       -> origin/main
Обновление 6ab6711..0d48792
Fast-forward
 hello_world.cpp | 16 +++++-----------
 1 file changed, 5 insertions(+), 11 deletions(-)

```

11. С помощью команды git log просмотрите историю в локальной версии ветки master.
```sh
                                                                                                                   
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git log --oneline --graph --all
*   0d48792 (HEAD -> main, origin/main, origin/HEAD) Merge pull request #1 from Empty4/patch1
|\  
| * 75ade87 (origin/patch1, patch1) Add code comments
| * 2841f70 not important, trying to fix the problem
| * 916acaf Remove 'using namespace std'
|/  
* 6ab6711 (origin/panch1) Add better version with name-input in hello_world.cpp
* ac8d495 Add bad version of hello_world.cpp
* 3d49345 Initial commit

```

12. Удалите локальную ветку patch1.
```sh
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git branch -d patch1
Ветка patch1 удалена (была 75ade87).
                                                                             
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git branch   
* main

```

  </p>
</details>

### Part3

<details>
  <summary></summary>
  <p>

1. Создайте новую локальную ветку patch2.
```sh
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git checkout -b patch2   
Переключились на новую ветку «patch2»

```

2. Измените code style с помощью утилиты [clang-format](http://clang.llvm.org/docs/ClangFormat.html). Например, используя опцию -style=Mozilla.
```sh
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ clang-format -style=Mozilla -i hello_world.cpp
                                                                                                                   
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git diff              
diff --git a/hello_world.cpp b/hello_world.cpp
index e07c326..89fead3 100644
--- a/hello_world.cpp
+++ b/hello_world.cpp
@@ -1,11 +1,13 @@
 #include <iostream>
 #include <string>
 
-int main() {
-    std::string name;
-    std::cout << "Enter your name: ";
-    std::getline(std::cin, name);
-    std::cout << "Hello " << (name.empty() ? "World" : "world from " + name) << "!" << std::endl; //? mean if constrution
-    return 0;
+int
+main()
+{
+  std::string name;
+  std::cout << "Enter your name: ";
+  std::getline(std::cin, name);
+  std::cout << "Hello " << (name.empty() ? "World" : "world from " + name)
+            << "!" << std::endl; //? mean if constrution
+  return 0;
 }
-
```

3. commit, push, создайте pull-request patch2 -> master.
```sh
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git add hello_world.cpp
                                                                                                                   
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git commit -m "Apply Mozilla code style using clang-format" 
[patch2 03e14fe] Apply Mozilla code style using clang-format
 1 file changed, 9 insertions(+), 7 deletions(-)
                                                                                                                   
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git push -u origin patch2                                
Username for 'https://github.com': empty4
Password for 'https://empty4@github.com': 
Перечисление объектов: 5, готово.
Подсчет объектов: 100% (5/5), готово.
При сжатии изменений используется до 2 потоков
Сжатие объектов: 100% (3/3), готово.
Запись объектов: 100% (3/3), 391 байт | 391.00 КиБ/с, готово.
Total 3 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
remote: 
remote: Create a pull request for 'patch2' on GitHub by visiting:
remote:      https://github.com/Empty4/Lab02Tump/pull/new/patch2
remote: 
To https://github.com/Empty4/Lab02Tump.git
 * [new branch]      patch2 -> patch2
branch 'patch2' set up to track 'origin/patch2'.

```

4. В ветке master в удаленном репозитории измените комментарии, например, расставьте знаки препинания, переведите комментарии на другой язык.

5. Убедитесь, что в pull-request появились конфликтны.

6. Для этого локально выполните pull + rebase (точную последовательность команд, следует узнать самостоятельно). Исправьте конфликты.
```sh
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git checkout patch2                                        
Уже на «patch2»
Эта ветка соответствует «origin/patch2».
                                                                                                                   
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git fetch origin   
remote: Enumerating objects: 5, done.
remote: Counting objects: 100% (5/5), done.
remote: Compressing objects: 100% (3/3), done.
remote: Total 3 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
Распаковка объектов: 100% (3/3), 1010 байтов | 1010.00 КиБ/с, готово.
Из https://github.com/Empty4/Lab02Tump
   0d48792..0e9f285  main       -> origin/main
                                                                             
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git rebase origin/main
Автослияние hello_world.cpp
КОНФЛИКТ (содержимое): Конфликт слияния в hello_world.cpp
error: не удалось применить коммит 03e14fe... Apply Mozilla code style using clang-format
hint: Resolve all conflicts manually, mark them as resolved with
hint: "git add/rm <conflicted_files>", then run "git rebase --continue".
hint: You can instead skip this commit: run "git rebase --skip".
hint: To abort and get back to the state before "git rebase", run "git rebase --abort".
hint: Disable this message with "git config set advice.mergeConflict false"
Не удалось применить коммит 03e14fe... # Apply Mozilla code style using clang-format

┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ nano hello_world.cpp  
                                                                                                                   
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git add hello_world.cpp
                                                                                                                   
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git rebase --continue
[отделённый HEAD 0476a0f] Apply Mozilla code style using clang-format and fix conflict
 1 file changed, 8 insertions(+), 6 deletions(-)
Успешно перемещён и обновлён refs/heads/patch2.

```

7. Сделайте force push в ветку patch2
```sh
┌──(kali㉿empty4)-[~/empty4/Lab02Tump]
└─$ git push origin patch2 --force-with-lease
Username for 'https://github.com': empy4
Password for 'https://empy4@github.com': 
Перечисление объектов: 5, готово.
Подсчет объектов: 100% (5/5), готово.
При сжатии изменений используется до 2 потоков
Сжатие объектов: 100% (3/3), готово.
Запись объектов: 100% (3/3), 401 байт | 401.00 КиБ/с, готово.
Total 3 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/Empty4/Lab02Tump.git
 + 03e14fe...0476a0f patch2 -> patch2 (forced update)

```

8. Убедитель, что в pull-request пропали конфликтны.

9. Вмержите pull-request patch2 -> master.

  </p>
</details>
