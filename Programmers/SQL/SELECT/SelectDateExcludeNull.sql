-- https://school.programmers.co.kr/learn/courses/30/lessons/131120
-- SELECT practice
-- SORT, DATE(MONTH), IS NOT NULL

SELECT MEMBER_ID, MEMBER_NAME, GENDER, DATE_OF_BIRTH
--DATE_FORMAT(DATE_OF_BIRTH,'%Y-%m-%d') AS DATE_OF_BIRTH
FROM MEMBER_PROFILE
WHERE TLNO IS NOT NULL AND GENDER = 'W' AND MONTH(DATE_OF_BIRTH) = '03'
ORDER BY MEMBER_ID ASC