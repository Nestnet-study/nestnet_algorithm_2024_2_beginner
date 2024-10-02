# 0. nestnet_algorithm_2024_2_beginner

2024-2 네스트넷 알고리즘 스터디 (브론즈 ~ 실버)

<b>
스터디장 - 정한울
</b>

<br>

<h1>
1. 스터디 소개
</h1>
충북대학교 학술동아리 네스트넷에서 진행하는 알고리즘 스터디로, 
<b>git 입문</b>과 <b>PS 입문</b>을 목표로 함.

<br>

문제 난이도: 백준 브론즈 ~ 실버

<h2>1-1. 문제 선정 및</h2>

[알고리즘 문제집](https://github.com/encrypted-def/basic-algo-lecture/blob/master/workbook.md)에서 하나의 주제 - 브론즈 2문제, 실버 2문제를 ❗매주 일요일❗에 선정.<br>
선정된 문제는 [백준 그룹 문제집](https://www.acmicpc.net/group/workbook/18220)에서 확인.
<br>


<h2>1-2. 풀이 기간</h2>
스터디원들은 해당 주차의 ❗월요일 ~ 토요일❗까지 문제를 풀어야함.

### ❌주의사항
개인사정으로 해당 주차 문제를 풀지 못할 시, 화요일까지 스터디장에게 알려야함.<br>
화요일까지 알리지 않고 문제를 풀지 않은 경우, 해당 주차 불참으로 간주함.
<br>

불참 벌금: ❗10,000원❗
<br>

<h2>1-3. 진행 방식</h2>
스터디는 온라인으로 진행되며, 매주 토요일까지 선정된 문제를 풀고, 각자의 레포지토리에 push한 후 PR을 보냄.<br>
모든 문제 풀이 코드는 <b>깃허브</b>를 사용하여 관리.

<br>

<br>

<h1>2. 깃 관리 + Issue & PR(Pull Request) </h1>

<b>먼저 fork & Pull Request를 잘 모른다면 <a href="https://inpa.tistory.com/entry/GIT-%E2%9A%A1%EF%B8%8F-%EA%B9%83%ED%97%99-PRPull-Request-%EB%B3%B4%EB%82%B4%EB%8A%94-%EB%B0%A9%EB%B2%95-folk-issue">블로그 참고</a></b>
<details>
  <summary>본문 보기</summary>

  ### 사진은 클릭하면 잘 보임.
  <ol>
    <li>본인이 코드를 작성할 프로젝트 / 폴더 생성</li>
    <li>
      Nestnet-study Organization의 <a href="https://github.com/Nestnet-study/nestnet_algorithm_2024_2_beginner">nestnet_algorithm_2024_2_beginner
</a> 레포지토리 fork
      <img src="https://github.com/user-attachments/assets/02bf5dcb-bab6-4cf8-bd96-2fe554a7e8b3", width=100%>
    </li>
    <li>
      fork 후에는 내 깃허브 레포지토리가 생김. <br>
      - organization의 레포지토리 : "Nestnet-study / nestnet_algorithm_2024_2_beginner" <br>
      - 내 레포지토리 : "본인 아이디 / nestnet_algorithm_2024_2_beginner" <br>
      내 레포지토리를 git clone.
      <img src="https://github.com/user-attachments/assets/2a04f1fd-d79a-49f4-b78d-d612e4726227", width=100%>
    </li>
    <li>
      프로젝트를 생성하고 적절한 위치에서 "git clone 레포지토리" 를 해준다. 내 경우, C:\InteliJ_workspace\2023-nestnet-algo\src\ 하위에서 clone을 해주었다.(java) <br>
      클론한 레포지토리 하위에 본인의 이름으로 폴더를 생성하고, 해당 폴더 하위에 주차별 패키지를 만든다. 템플릿 : <b>이름/week_해당주차</b> <br> ex) KimSeongHo/week_1
      <img src="https://github.com/Nestnet-study/nestnet_algorithm_2023_2/assets/81570533/6cbaef03-6027-4ff7-b2a7-8004047ddf34", width=100%>
      <img src="https://github.com/Nestnet-study/nestnet_algorithm_2023_2/assets/81570533/16f934d6-8fbc-4ac0-97df-026e3d8d429b", width=100%>
    </li>
    <li>
      week_해당주차 하위에 소스파일을 생성한다. 템플릿 : <b>Boj문제번호</b> ex) week_1/Boj1343.java
    </li>
    <li>
      해당 주차 문제를 모두 풀면 "git add 본인 이름" -> git commit -m "(#이슈번호) [해당주차] 이름" 으로 커밋을 한 후 본인 레포지토리에 push 한다. ex) git commit -m "(#3) [1주차] 김성호"
      <img src="https://github.com/Nestnet-study/nestnet_algorithm_2023_2/assets/81570533/2c14488a-3965-45fa-a995-eff56029e28f", width=100%>
    </li>
    <li>
      본인 레포지토리에 push가 잘 된 것을 확인한 후, 
      <img src="https://github.com/Nestnet-study/nestnet_algorithm_2023_2/assets/81570533/b2929c50-9cb1-454d-aa8c-2cfeaa53abdb", width=100%>
      PR을 생성한다. 
      <img src="https://github.com/Nestnet-study/nestnet_algorithm_2023_2/assets/81570533/dfe7690a-c94d-40c3-b917-bd7ba30792f5", width=100%>
    </li>
    <li>
      head repository는 fork해서 가져온 내 레포지토리이고, base repository는 organization의 레포지토리이다. head의 main 브랜치에서 에서 base의 main 브랜치로 PR을 보내는 것이다.  
      <img src="https://github.com/Nestnet-study/nestnet_algorithm_2023_2/assets/81570533/e6b83f31-89ec-4c28-9e81-0136306a00d2", width=100%>
    </li>
    <li>
      PR 제목 템플릿 : [해당 주차] 이름 ex) [1주차] 김성호 으로 PR을 작성한다. 내용은 각 문제를 쓰고 어떻게 풀었는지, 다른사람에게 알려주고 싶은 내용은 무엇인지 작성한다. (딱히 없으면 뭐..)
      <img src="https://github.com/Nestnet-study/nestnet_algorithm_2023_2/assets/81570533/d30d987a-bdd1-4204-9e05-49ed9652e049", width=100%>
    </li>
  </ol>
</details>

<br>

<h3><b>4. 모든 풀이 끝난 후, Organization Repository에 merge가 끝난 후</b> </h3>
<details>
  <summary>자세히</summary>
  fork해서 가져온 본인 레포지토리의 Sync fork를 해서 Organization Repository와 동기화 해준다.
  <img src="https://github.com/Nestnet-study/nestnet_algorithm_2023_2/assets/81570533/6637504b-45f8-4ead-ac83-c74a67dee8e3", width=100%>
</details>


