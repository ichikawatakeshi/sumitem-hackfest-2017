USE [GSumitemV5]
GO

/****** Object:  Table [dbo].[PlantStatus]    Script Date: 2017/01/26 11:12:40 ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

SET ANSI_PADDING ON
GO

CREATE TABLE [dbo].[PlantStatus](
	[PlantCD] [smallint] NOT NULL,
	[Status] [varchar](255) NULL
 CONSTRAINT [PK_PlantCD] PRIMARY KEY CLUSTERED 
)

GO

SET ANSI_PADDING OFF
GO

ALTER TABLE [dbo].[PlantStatus] ADD  CONSTRAINT [DF_PlantStatus_PlantCD]  DEFAULT ((0)) FOR [PlantCD]
GO

