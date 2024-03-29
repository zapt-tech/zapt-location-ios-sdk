Pod::Spec.new do |s|  
    s.name              = 'ZaptLocation-iOS-SDK'
    s.version           = '0.0.11'
    s.summary           = 'SDK for indoor positioning'
    s.homepage          = 'http://docs.zapt.tech/'

    s.author           = { "Zapt Tecnologia de Localizacao Ltda." => "contato@zapt.tech" }

    s.license          = 'Copyright'
    s.documentation_url = "http://docs.zapt.tech"

    s.platform          = :ios
    s.source            = { :git => "https://github.com/zapt-tech/zapt-location-ios-sdk.git", :tag => "0.0.11" }

    s.ios.deployment_target = '9.0'
    s.ios.vendored_frameworks = 'ZaptLocation_iOS_SDK.framework'
    s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64', 'DEFINES_MODULE' => 'YES' }
    s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end
