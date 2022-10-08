-- https://school.programmers.co.kr/learn/courses/30/lessons/131118
-- SELECT practice
-- JOIN, ROUND, AVG, LIKE, GROUP BY, ORDER BY

SELECT REST_INFO.REST_ID, REST_INFO.REST_NAME, REST_INFO.FOOD_TYPE,
REST_INFO.FAVORITES, REST_INFO.ADDRESS,
ROUND(AVG(REST_REVIEW.REVIEW_SCORE),2) AS SCORE
FROM REST_INFO RIGHT JOIN REST_REVIEW
ON REST_INFO.REST_ID = REST_REVIEW.REST_ID
WHERE ADDRESS LIKE '서울%'
GROUP BY REST_ID ORDER BY SCORE DESC, REST_INFO.FAVORITES DESC