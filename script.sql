USE [Timetable System]
GO
/****** Object:  Table [dbo].[Course]    Script Date: 23/05/2024 11:04:05 pm ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Course](
	[Coursename] [nvarchar](250) NOT NULL,
	[Coursecode] [int] NOT NULL,
	[TeacherID] [int] NULL,
	[RoomNum] [nvarchar](250) NULL,
	[StudentEnrollment] [int] NULL,
PRIMARY KEY CLUSTERED 
(
	[Coursecode] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Profile]    Script Date: 23/05/2024 11:04:05 pm ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Profile](
	[username] [nvarchar](250) NOT NULL,
	[password] [nvarchar](250) NOT NULL,
	[name] [nvarchar](250) NOT NULL,
	[age] [int] NOT NULL,
	[role] [nvarchar](250) NOT NULL
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Room]    Script Date: 23/05/2024 11:04:05 pm ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Room](
	[RoomNum] [nvarchar](250) NOT NULL,
	[RoomCapacity] [int] NOT NULL,
PRIMARY KEY CLUSTERED 
(
	[RoomNum] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Section]    Script Date: 23/05/2024 11:04:05 pm ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Section](
	[SectionName] [nvarchar](250) NOT NULL,
	[StudentEnrollment] [int] NULL,
PRIMARY KEY CLUSTERED 
(
	[SectionName] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Student]    Script Date: 23/05/2024 11:04:05 pm ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Student](
	[StudentName] [nvarchar](250) NOT NULL,
	[StudentEmail] [nvarchar](250) NOT NULL,
	[StudentEnrollment] [int] NOT NULL,
	[SectionName] [nvarchar](250) NULL,
	[Coursecode] [int] NULL,
PRIMARY KEY CLUSTERED 
(
	[StudentEnrollment] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Teacher]    Script Date: 23/05/2024 11:04:05 pm ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Teacher](
	[TeacherName] [nvarchar](250) NOT NULL,
	[TeacherEmail] [nvarchar](250) NOT NULL,
	[TeacherID] [int] NOT NULL,
	[Coursecode] [int] NULL,
PRIMARY KEY CLUSTERED 
(
	[TeacherID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
ALTER TABLE [dbo].[Course]  WITH CHECK ADD FOREIGN KEY([RoomNum])
REFERENCES [dbo].[Room] ([RoomNum])
GO
ALTER TABLE [dbo].[Course]  WITH CHECK ADD FOREIGN KEY([StudentEnrollment])
REFERENCES [dbo].[Student] ([StudentEnrollment])
GO
ALTER TABLE [dbo].[Course]  WITH CHECK ADD FOREIGN KEY([TeacherID])
REFERENCES [dbo].[Teacher] ([TeacherID])
GO
ALTER TABLE [dbo].[Section]  WITH CHECK ADD FOREIGN KEY([StudentEnrollment])
REFERENCES [dbo].[Student] ([StudentEnrollment])
GO
ALTER TABLE [dbo].[Student]  WITH CHECK ADD FOREIGN KEY([Coursecode])
REFERENCES [dbo].[Course] ([Coursecode])
GO
ALTER TABLE [dbo].[Student]  WITH CHECK ADD FOREIGN KEY([SectionName])
REFERENCES [dbo].[Section] ([SectionName])
GO
ALTER TABLE [dbo].[Teacher]  WITH CHECK ADD FOREIGN KEY([Coursecode])
REFERENCES [dbo].[Course] ([Coursecode])
GO
