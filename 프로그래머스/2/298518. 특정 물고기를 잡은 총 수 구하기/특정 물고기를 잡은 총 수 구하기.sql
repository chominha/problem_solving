SELECT COUNT(FISH_INFO.FISH_TYPE) AS FISH_COUNT
FROM FISH_INFO
JOIN FISH_NAME_INFO ON FISH_INFO.FISH_TYPE = FISH_NAME_INFO.FISH_TYPE
WHERE FISH_NAME_INFO.FISH_NAME IN("BASS", "SNAPPER")