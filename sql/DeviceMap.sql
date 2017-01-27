USE [GSumitemV5]
GO

/****** Object:  Table [dbo].[DeviceMap]    Script Date: 2017/01/26 11:12:14 ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

CREATE TABLE [dbo].[DeviceMap](
	[PlantCD] [smallint] NOT NULL,
	[HubID] [int] NOT NULL,
	[DeviceID] [varchar](255) NOT NULL
 CONSTRAINT [PK_PlantCD] PRIMARY KEY CLUSTERED 
)

GO

ALTER TABLE [dbo].[DeviceMap] ADD  CONSTRAINT [DF_DeviceMap_PlantCD]  DEFAULT ((0)) FOR [PlantCD]
GO

ALTER TABLE [dbo].[DeviceMap] ADD  CONSTRAINT [DF_DeviceMap_HubID]  DEFAULT ((0)) FOR [HubID]
GO

ALTER TABLE [dbo].[DeviceMap] ADD  CONSTRAINT [DF_DeviceMap_DeviceID]  DEFAULT ((0)) FOR [DeviceID]
GO


