CREATE DATABASE `gungame`;

create table gungame.log_kill
(
	id int auto_increment
		primary key,
	pid varchar(32) null,
	victim_pid varchar(32) null,
	created_at timestamp default current_timestamp() null
);

create table gungame.players
(
	pid varchar(32) not null
		primary key,
	name varchar(64) default '' null,
	updated_at timestamp default current_timestamp() null on update current_timestamp(),
	created_at timestamp default current_timestamp() null
);



