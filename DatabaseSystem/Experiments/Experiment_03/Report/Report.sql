# 创建课程信息表
create table CourseInfoTable (
    CourseId integer auto_increment,
    CourseName varchar(255) not null,
    TeacherName varchar(255) not null,
    constraint CourseInfoTable_pk primary key (CourseId)
) comment '课程信息表';
# 创建学生交费信息表
create table StudentPaymentTable (
    StudentId integer not null,
    TermId integer not null,
    PaymentAmount decimal not null,
    Date datetime not null,
    constraint StudentPaymentTable_pk primary key (StudentId)
) comment '学生交费信息表';
# 创建学生学籍信息表
create table StudentInfoTable (
    StudentId integer auto_increment,
    StudentName varchar(255) not null,
    StudentSex bool not null,
    GradeId integer not null,
    ClassId integer not null,
    StudentBirthday date not null,
    Address varchar(255) not null,
    PostCode integer not null,
    ContactNumber varchar(255) not null,
    EnrollmentDate date not null,
    Comment varchar(255) not null,
    constraint StudentInfoTable_pk primary key (StudentId)
) comment '学生学籍信息表';
# 创建test表
create table test (
    ClsNo char(6) not null,
    ClsName varchar(16) not null,
    Director varchar(10) not null,
    Specialty varchar(30) not null,
    constraint test_pk primary key (ClsNo)
);
# 查看test表
select *
from test;
# 修改test表
alter table test
add Comment varchar(255) null;
# 删除test表
drop table test;