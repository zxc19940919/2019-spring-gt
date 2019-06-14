# 2019-spring-gt
演算法思路

1.先判斷整張圖是否為連通圖
2.找出圖上所有的奇點(一定是偶數)
3.找出所有奇點對奇點之間的最短路徑
4.把這些奇點做最小權匹配，權重採用最短路徑
5.將匹配邊加在原圖上，再找eular cycle 即可得到chinese postman路徑權重
6.將匹配的邊改成其代表的路徑，最後得到chinese postman路徑

程式碼解釋

====<main function>==== 

為主要的程式碼架構

其中包含了所有的function

有大致上的流程 以及運算順序

====<readfile>====

在讀檔時 

把所有的vertex存在class Node裡
Node裡面包含了每個vertex所連接的edge

同時也創了一個edge的class 用來儲存每條edge 
而每條edge也記載了所有連接的vertex
在後面演算法裡面做運算用

====<findOddDegreeNodes>====

在這個findodddegreenodes 函式
用來找出所有儲存奇數degree的vertex 並且把它紀錄起來

====<calculateShortestPath>====

用來計算每個奇點的最短路徑

====<min_w_matching>====

把這些奇點做最小權重匹配

====<FindShortPath>====

將匹配的邊改成其最短的代表路徑

====<addNets>====

加虛擬得線進去來走

====<tracePath>====

最後確定路徑 輸出路徑
並且輸出final檔案
