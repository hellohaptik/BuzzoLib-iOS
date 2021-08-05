#
#  Be sure to run `pod spec lint HaptikCommerceLib.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.
  #

  spec.name         = "HaptikCommerceLib"
  spec.version      = "0.2.3"
  spec.summary      = "The Buzzo SDK enables brands to turn their app into a Shopping and Ordering Assistant."

  spec.description  = <<-DESC
                    The Buzzo SDK enables brands to turn their app into a Shopping and Ordering Assistant. It enables users to search, filter and sort products by voice, get personalised recommendations and buying guidance,  ask product specific questions as well as to discover reviews based product insights.
                   DESC

  spec.homepage     = "https://www.buzzo.ai"


  # ―――  Spec License  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

  spec.license      = { :type => "Commercial", :file => "LICENSE" }


  # ――― Author Metadata  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

  spec.author             = { "Ketan Doiphode" => "ketan@haptik.ai" }
  spec.social_media_url   = "https://twitter.com/haptik"

  # ――― Platform Specifics ――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

  spec.vendored_frameworks = "Frameworks/HaptikCommerceLib/HaptikCommerce.xcframework"
  spec.platform     = :ios
  spec.platform     = :ios, "10.0"

  # ――― Source Location ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

  spec.source       = { :git => "https://github.com/hellohaptik/BuzzoLib-iOS.git", :tag => "#{spec.version}" }

  # ――― Project Linking ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

  spec.frameworks = "WebKit", "Speech", "UIKit", "AVFoundation", "Foundation"
  spec.dependency 'Starscream', '~> 4.0.0'

  # ――― Project Settings ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

  spec.requires_arc = true


end
