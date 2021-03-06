//
//  uexCV_TableViewCell.h
//  EUExConversationView
//
//  Created by Cerino on 15/9/15.
//  Copyright (c) 2015年 AppCan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "uexCV_UserInfo.h"
#import "Masonry.h"



#define WS(weakSelf)  __weak __typeof(&*self)weakSelf = self;


#define uexCV_default_margin 2
#define uexCV_inner_padding UIEdgeInsetsMake(5,20,5,15)
#define uexCV_inner_max_width_multipier 0.5
#define uexCV_default_label_color [UIColor uexCV_colorFromHtmlString:@"#ff4800"]
#define uexCV_default_label_size 10
#define uexCV_from_you (self.status == cUexCV_TableViewCellYou)

#define uexCV_cell_container ws.containerView

typedef NS_ENUM(NSInteger, uexCV_TableViewCellStatus) {
    cUexCV_TableViewCellUnknown = 0,
    cUexCV_TableViewCellMe,
    cUexCV_TableViewCellYou
};


@interface uexCV_TableViewCell : UITableViewCell
@property (nonatomic,assign)uexCV_TableViewCellStatus status;
@property (nonatomic,strong)UIImageView *photo;
@property (nonatomic,strong)UIImageView *messageView;
@property (nonatomic,strong)UILabel * timeLabel;
@property (nonatomic,strong)UILabel * nameLabel;
@property (nonatomic,strong)UIView *containerView;



//-(instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier messageData:(NSDictionary*)data userInfo:(uexCV_UserInfo *)info;
-(void)modifiedCellWithMessageData:(NSDictionary*)data userInfo:(uexCV_UserInfo *)info;


@end
