# Write your MySQL query statement below

SELECT w1.id from Weather as W1,Weather as W2 WHERE W1.temperature>W2.temperature && DATEDIFF(W1.recordDate,W2.recordDate)=1;