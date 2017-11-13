# Script zum entfernen sinnlose bloatware in Windows 10

# Um Skripte in Windows auszuführen gibt es mehrere "sichere" wege:
# - entweder man erstellt eine Signatur für das eine Skript (New-SelfSignedCertificate) oder
# - man stellt die ExecutionPolicy auf eigene Skripte: Set-ExecutionPolicy RemoteSigned
#    - danach am besten wieder auf: Set-ExecutionPolicy Restricted

# Als erstes werden die, ich denke erstmal unkritischen Apps, entfernt
Get-AppxPackage -name "Microsoft.ZuneMusic" | Remove-AppxPackage
Get-AppxPackage -name "Microsoft.ZuneVideo" | Remove-AppxPackage
Get-AppxPackage -name "Microsoft.Windows.Photos" | Remove-AppxPackage
Get-AppxPackage -name "Microsoft.SkypeApp" | Remove-AppxPackage
Get-AppxPackage -name "Microsoft.WindowsCamera" | Remove-AppxPackage
Get-AppxPackage -name "Microsoft.Office.OneNote" | Remove-AppxPackage
Get-AppxPackage -name "microsoft.windowscommunicationsapps" | Remove-AppxPackage
Get-AppxPackage -name "Microsoft.XboxIdentityProvider" | Remove-AppxPackage
Get-AppxPackage -name "Microsoft.XboxApp" | Remove-AppxPackage
Get-AppxPackage -name "Microsoft.WindowsMaps" | Remove-AppxPackage
Get-AppxPackage -name "Microsoft.Microsoft3DViewer" | Remove-AppxPackage
Get-AppxPackage -name "Microsoft.WindowsAlarms" | Remove-AppxPackage
Get-AppxPackage -name "Microsoft.MicrosoftSolitaireCollection" | Remove-AppxPackage
Get-AppxPackage -name "Microsoft.WindowsSoundRecorder" | Remove-AppxPackage
Get-AppxPackage -name "Microsoft.MicrosoftOfficeHub" | Remove-AppxPackage
Get-AppxPackage -name "Microsoft.People" | Remove-AppxPackage
Get-AppxPackage -name "Microsoft.Messaging" | Remove-AppxPackage

# nochmals alles ausgeben, damit weitere Apps erfasst werden können
Get-AppxPackage



