-- https://school.programmers.co.kr/learn/courses/30/lessons/59405
-- SELECT practice
-- SORT & LIMIT

SELECT NAME FROM ANIMAL_INS
ORDER BY DATETIME ASC LIMIT 1

-- SUB QUARY

-- SELECT NAME FROM ANIMAL_INS
-- WHERE DATETIME = (SELECT MIN(DATETIME) FROM ANIMAL_INS)