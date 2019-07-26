Pod::Spec.new do |s|  
    s.name              = 'ZaptLocation-iOS-SDK'
    s.version           = '0.0.2'
    s.summary           = 'SDK for indoor positioning'
    s.homepage          = 'http://docs.zapt.tech/'

    s.author           = { "Zapt Tecnologia de Localizacao Ltda." => "contato@zapt.tech" }

    s.license          = 'Copyright'
    s.documentation_url = "http://docs.zapt.tech"

    s.platform          = :ios
    s.source            = { :git => "https://github.com/zapt-tech/zapt-location-ios-sdk.git", :tag => "0.0.1" }

    s.ios.deployment_target = '8.0'
    s.ios.vendored_frameworks = 'ZaptLocation_iOS_SDK.framework'
end
