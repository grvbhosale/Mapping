
#include <ros/ros.h>
#include <pcl_ros/point_cloud.h>
#include <pcl/point_types.h>
#include "std_msgs/String.h"
#include <pcl_conversions/pcl_conversions.h>
#include <pcl/io/pcd_io.h>

typedef pcl::PointCloud<pcl::PointXYZ> PointCloud;

void callback(const PointCloud::ConstPtr& msg)
{
  pcl::io::savePCDFileASCII ("/home/gaurav/catkin_ws/src/mapsaver/maps/map_pcd.pcd", *msg);
  printf("running");
}

int main(int argc, char** argv)
{
  ros::init(argc, argv, "sub_pcl");
  ros::NodeHandle nh2;
  ros::Subscriber sub = nh2.subscribe<PointCloud>("laser_cloud_surround", 1, callback);
  ros::spin();
}
