/*
 * drivers/amlogic/display/ge2d/ge2d_wq.h
 *
 * Copyright (C) 2015 Amlogic, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
*/

#ifndef _GE2D_WQ_H_
#define _GE2D_WQ_H_

extern ssize_t work_queue_status_show(struct class *cla,
		struct class_attribute *attr, char *buf);

extern ssize_t free_queue_status_show(struct class *cla,
		struct class_attribute *attr, char *buf);

extern int ge2d_setup(int irq, struct reset_control *rstc);
extern int ge2d_wq_init(struct platform_device *pdev,
	int irq, struct reset_control *rstc, struct clk *clk);
extern int ge2d_wq_deinit(void);

#endif
