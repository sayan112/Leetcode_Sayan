# Write your MySQL query statement below
 SELECT  Visits.customer_id , COUNT(Visits.visit_id) AS count_no_trans  FROM Visits LEFT JOIN Transactions on Visits. visit_id=Transactions.visit_id where  Transactions.transaction_id IS NULL GROUP BY customer_id ;
 
#  before using where 
# ["visit_id", "customer_id", "transaction_id", "visit_id", "amount"], "values": 
# [[1, 23, 12, 1, 910], 
#  [2, 9, 13, 2, 970],
#  [4, 30, null, null, null], 
#  [5, 54, 9, 5, 200],
#  [5, 54, 3, 5, 300],
#  [5, 54, 2, 5, 310],
#  [6, 96, null, null, null], 
#  [7, 54, null, null, null], 
#  [8, 54, null, null, null]]}

#  after using where (transaction id =null)
 # ["visit_id", "customer_id", "transaction_id", "visit_id", "amount"], 
 # [[4, 30, null, null, null],
 #  [6, 96, null, null, null], 
 #  [7, 54, null, null, null], 
 #  [8, 54, null, null, null]]}