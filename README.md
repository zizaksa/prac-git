# Master Branch
이 브랜치는 **Master** 브랜치입니다.

# 들어가기 전에
먼저 바탕화면에 **project** 라는 폴더를 하나 생성합니다. 그런 뒤 **Visual Studio Code**를 실행하여 **Open folder...** 를 눌러 생성한 폴더를 선택합니다. 그런 뒤 **Ctrl+\`** 키를 입력하여 터미널 창을 하나 띄웁니다. 이제 모든 명령어는 이 터미널 창에서 진행해 주시면 됩니다.

## Git 계정 설정
git을 사용하기 위해서 기본적으로 이메일 및 이름이 필요합니다. 다음 명령어로 설정해줍니다.

```sh
$ git config --global user.email <여기에 본인의 github 이메일을 적습니다>
$ git config --global user.name <여기에 이름을 입력합니다>
```
적을때는 &lt;&gt; 기호는 제외하고 적어야 합니다. 설정이 완료되면 본인의 이메일과 이름이 정상적으로 설정 되어있는지 확인합니다.
```sh
$ git config --global user.email
gildong@something.com
$ git config --global user.name
Hong Gildong
```

# Git 실습
먼저 이 저장소를 클론합니다.

```
$ git clone https://github.com/zizaksa/prac-git.git
```

클론이 완료되면 **prac-git** 이라는 폴더가 하나 생성됩니다. 이 폴더가 원격 저장소를 클론한 로컬 저장소가 되며 이 폴더에서 다시 진행합니다. **Visual Studio Code**를 종료하고 다시 열어 **Open folder...** 이후 이 **prac-git** 폴더를 선택합니다.

# Branch 확인
터미널 창에서 다음을 입력하여 정상적으로 나오는지 확인합니다.

```sh
$ git branch
* master
```

현재 **master**브랜치로 되어 있습니다. 현재 원격 저장소에는 **slave** 이름의 브랜치가 하나 존재합니다. 현재 브랜치를 **slave**로 변경합니다.

```sh
$ git checkout slave
Switched to branch 'slave'
Your branch is up to date with 'origin/slave'.
```

**README.md** 파일을 열어 Slave Branch가 적혀 있는지 확인합니다.

위와 같이 브랜치를 변경할 수 있습니다.

# Branch 생성
먼저 브랜치를 **base** 브랜치로 변경합니다

```sh
$ git checkout base
Switched to branch 'base'
Your branch is up to date with 'origin/base'.
```

이제 실습을 위해 자신의 브랜치를 생성합니다. github 아이디를 브랜치 명으로 하나 생성합니다. 예시를 위해 여기서는 아이디를 **userid**라고 가정하겠습니다.

```sh
$ git checkout -b userid
Switched to a new branch 'userid'
```

**README.md** 파일을 열어 **[Your Github ID]** 부분에 github 아이디를 입력합니다. 그런 다음 파일을 저장하고 터미널에서 다음을 입력하여 정상적으로 반영이 되어있는지 확인합니다.

```sh
$ git status
On branch userid
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git checkout -- <file>..." to discard changes in working directory)

        modified:   README.md

no changes added to commit (use "git add" and/or "git commit -a")
```

파일을 수정하였는데 아직 스테이징이 되어있지 않다고 나옵니다. 커밋을 위해서는 스테이징이 필요하다고 했습니다. `git add`를 이용해 스테이징을 해줍시다.

```sh
$ git add .
$ git status
On branch userid
Changes to be committed:
  (use "git reset HEAD <file>..." to unstage)

        modified:   README.md
```

정상적으로 스테이지에 올라가있습니다. 이제 커밋을 해줍니다.

```sh
$ git commit -m "this is my first commit"
[userid ede8107] this is my first commit
 1 file changed, 2 insertions(+), 2 deletions(-)
```

커밋이 정상적으로 올라갔는지 확인해봅니다.
```sh
$ git log
commit ede810737ea66c039bca3de4f6e19df0606c217b (HEAD -> userid)
Author: Chaehong Jeong <brcps12@gmail.com>
Date:   Sun Sep 27 15:08:19 2020 +0900

    this is my first commit

commit 1e593bea7096d46877577786f112d0f1a02ce70e (origin/base, base)
Author: Chaehong Jeong <brcps12@gmail.com>
Date:   Sun Sep 27 15:01:24 2020 +0900

    update README

commit fb7e623cbdc5934f462281b61ad3e3ee3dc4f5a7 (origin/master, origin/HEAD, master)
Author: Chaehong Jeong <brcps12@gmail.com>
Date:   Sun Sep 27 14:17:14 2020 +0900

    Initial commit
```

각자 환경에 따라서 일부 달라질 수 있지만, **this is my first commit** 부분만 확인이 되면 됩니다.

여기서 **Author**에는 위에서 설정한 본인의 이름과 이메일이 들어갑니다. 각 커밋의 상단에 **commit ede8107...** 처럼 이상한 문자들이 보이는데, **ed8107...** 같은 문자열이 각 커밋의 아이디입니다. 커밋 아이디는 같은 저장소에서는 유일하며 커밋 아이디로 각 커밋을 구분합니다.

# Push
이제 로컬저장소에서 원격으로 코드를 업로드 시키는 작업이 필요합니다. 이때는 간단하게 아래 명령어를 입력합니다.

```sh
$ git push
```

이때 깃허브 아이디와 비밀번호를 입력하라는 메시지가 나올수 있습니다. 이때 비밀번호를 입력할 때 터미널에서는 아무런 반응이 뜨지 않습니다. 다시말해 키보드를 입력해도 어떤 문자도 입력되지 않는 것처럼 보입니다. 하지만 이는 버그가 아니며 터미널에서 보통 비밀번호를 입력하게 할 때는 이처럼 반응이 없도록 만듭니다. 잘 입력 되는 것이니까 그대로 입력하시면 됩니다.

이제 푸시까지 완료 되었습니다. 깃허브 사이트에 접속하셔서 브랜치를 변경하고 정상적으로 올라가있는지 확인해봅니다.

# 직접 해봅시다
C++ 코드를 작성합니다. 프로그램은 구구단이며 아래와 같은 요구사항이 만족되어야 합니다.

- 파일명은 **gugudan.cpp**
- 입력은 표준 입출력을 이용
- 입출력 형식은 다음과 
  - 임의의 숫자 (1~9)를 입력받고 해당하는 숫자의 구구단을 출력합니다.

### 입력예시
```
4
```

### 출력예시
```
4 X 1 = 4
4 X 2 = 8
4 X 3 = 12
4 X 4 = 16
4 X 5 = 20
4 X 6 = 24
4 X 7 = 28
4 X 8 = 32
4 X 9 = 36
```

## 코딩 처음이신 분들께
기본적은 코딩 양식은 아래 코드를 참고해주기 바랍니다.

```c++
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // 구구단 작성

    return 0;
}
```

### 컴파일
코드를 저장소에 올리기 전에 컴파일을 직접 하여 정상 동작하는지 확인합니다. 터미널에서 다음을 입력합니다.

```sh
$ gcc gugudan.cpp -o gugudan
```

아무런 메시지가 뜨지 않으면 정상적으로 컴파일이 된겁니다. 이제 실행하여 정상적으로 동작하는 지 확인합니다.

```sh
$ ./gugudan
7
7 X 1 = 7
7 X 2 = 14
7 X 3 = 21
7 X 4 = 28
7 X 5 = 35
7 X 6 = 42
7 X 7 = 49
7 X 8 = 56
7 X 9 = 63
```
