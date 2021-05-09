# 使用Insert命令添加数据
CREATE TABLE IF NOT EXISTS Course (
    `Cno` INT,
    `Cname` VARCHAR(8) CHARACTER SET utf8,
    `Ccredit` INT,
    `Cpno` INT
);
INSERT INTO Course
VALUES (1, '数据库', 4, 5),
    (2, '数学', 6, NULL),
    (3, '信息系统', 3, 1),
    (4, '操作系统', 4, 6),
    (5, '数据结构', 4, 7),
    (6, '数据处理', 3, NULL),
    (7, 'PASCAL语言', 4, 6),
    (8, '计算机基础', 5, NULL),
    (9, 'C++程序设计', 4, 8),
    (10, '离散数学', 4, NULL),
    (11, '微机原理', 5, 8),
    (12, '数据库原理', 4, 9),
    (13, '计算机网络', 3, 9),
    (14, '软件工程', 3, 9),
    (15, '图形学', 3, 8);