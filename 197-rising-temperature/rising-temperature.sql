/* Write your T-SQL query statement below */

select b.id
from Weather w  join Weather b
on DATEDIFF(day,w.recordDate , b.recordDate) = 1 
where b.temperature > w.temperature ;
