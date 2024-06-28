select Employee.name,Bonus.bonus
from Employee
Left Join Bonus ON Employee.empId=Bonus.empId
where Bonus.bonus<1000 or Bonus.bonus IS NULL;